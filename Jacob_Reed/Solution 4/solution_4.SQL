SELECT
    a.id, a.first_name, a.last_name, COUNT(b.author_id) AS number_of_books
FROM
    author a LEFT JOIN
    books b ON b.author_id = a.id
WHERE
    a.last_name = "Smith"
GROUP BY
    a.id
